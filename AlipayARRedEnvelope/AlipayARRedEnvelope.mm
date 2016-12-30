// AlipayARRedEnvelope.mm
// Copyright (c) 2016 陈超邦.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import  <Foundation/Foundation.h>
#import  <CoreLocation/CoreLocation.h>
#import  <UIKit/UIKit.h>
#include <notify.h>
#import  "CaptainHook/CaptainHook.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

//红包数据模型
static id envelopModel;

//AR 红包扫描控制器
@class ARERealityViewController;

CHDeclareClass(ARERealityViewController);

//显示菜单
CHOptimizedMethod(0, self, void, ARERealityViewController, showPopMenu) {
    UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"标记选项"
                                                        message:@"1: 建议领取时间间隔为1-3分钟 ~_^ \n 2: 每日领取个数上限为10 ᶘ ᵒᴥᵒᶅ \n 3: 请关注公众号'iOS安全小贴士' ( ̀⌄ ́)"
                                                       delegate:self
                                              cancelButtonTitle:@"等会再说"
                                              otherButtonTitles:@"标记此红包", @"取消已标记红包", nil];
    alertView.tag = 101;
    [alertView show];
}

//UIAlertView 代理方法
CHDeclareMethod2(void, ARERealityViewController, alertView, UIAlertView *, alertView, clickedButtonAtIndex, NSInteger, buttonIndex) {
    if (alertView.tag == 101) {
        if (buttonIndex == 1) {
            envelopModel = [((id(*)(id, SEL))objc_msgSend)(alertView.delegate, sel_registerName("envelopModel")) retain];
            NSString *creatorAlipayAccount = ((id(*)(id, SEL))objc_msgSend)(envelopModel, sel_registerName("creatorAlipayAccount"));
            
            if (creatorAlipayAccount) {
                NSString *creatorUserName = ((id(*)(id, SEL))objc_msgSend)(envelopModel, sel_registerName("creatorUserName"));
                CLLocation *userLocation = ((id(*)(id, SEL))objc_msgSend)(envelopModel, sel_registerName("userLocation"));
                
                [[[UIAlertView alloc] initWithTitle:@"标记成功"
                                            message:[NSString stringWithFormat:@"创建人姓名：%@ \n 创建人账号：%@ \n 红包位置: 经度%0.2f 纬度%0.2f", creatorUserName, creatorAlipayAccount, userLocation.coordinate.longitude, userLocation.coordinate.latitude]
                                           delegate:nil
                                  cancelButtonTitle:@"知道了"
                                  otherButtonTitles:nil] show];
            } else {
                [[[UIAlertView alloc] initWithTitle:@"警告"
                                            message:@"没有获取到红包数据，请等待数据加载或者返回重试"
                                           delegate:nil
                                  cancelButtonTitle:@"知道了"
                                  otherButtonTitles:nil] show];
            }
        } else if (buttonIndex == 2) {
            envelopModel = nil;
        }
    } else if (alertView.tag == 102){
        if (buttonIndex == 1) {
            ((void(*)(id, SEL, id))objc_msgSend)(alertView.delegate, sel_registerName("setEnvelopModel:"), envelopModel);
        }
    }
}

//视图加载完毕
CHOptimizedMethod(0, self, void, ARERealityViewController, updateEnvelopeElements) {
    if (envelopModel) {
        NSString *creatorAlipayAccount = ((id(*)(id, SEL))objc_msgSend)(envelopModel, sel_registerName("creatorAlipayAccount"));
        NSString *creatorUserName = ((id(*)(id, SEL))objc_msgSend)(envelopModel, sel_registerName("creatorUserName"));
        CLLocation *userLocation = ((id(*)(id, SEL))objc_msgSend)(envelopModel, sel_registerName("userLocation"));
        
        UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"注意"
                                                            message:[NSString stringWithFormat:@"检测到存在已标记红包数据 \n 是否覆盖当前页面数据 ？\n 创建人姓名：%@ \n 创建人账号：%@ \n 红包位置: 经度%0.2f 纬度%0.2f", creatorUserName, creatorAlipayAccount, userLocation.coordinate.longitude, userLocation.coordinate.latitude]
                                                           delegate:self
                                                  cancelButtonTitle:@"不了"
                                                  otherButtonTitles:@"好的，填它", nil];
        alertView.tag = 102;
        [alertView show];
    }
    
    CHSuper(0, ARERealityViewController, updateEnvelopeElements);
}

#pragma clang diagnostic pop

//入口设置
CHConstructor {
    @autoreleasepool {
        //ARERealityViewController 方法注册
        CHLoadLateClass(ARERealityViewController);
        CHHook0(ARERealityViewController, showPopMenu);
        CHHook0(ARERealityViewController, updateEnvelopeElements);
    }
}
