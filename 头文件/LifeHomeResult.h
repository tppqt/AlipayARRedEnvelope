//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"
#import "NSCoding.h"

@class HomeTemplate, NSMutableArray, NSString, PhotoInfo, PublicDesc, PublicLifeInfo;

@interface LifeHomeResult : APPBGeneratedMessage <NSCoding, GeneratedMessageProtocol>
{
    _Bool _hasPublicId;
    _Bool _hasPublicLifeInfo;
    _Bool _hasFollowed;
    _Bool _hasAlreadyLiked;
    _Bool _hasPublicDesc;
    _Bool _hasPhotoInfo;
    _Bool _hasUploadGis;
    _Bool _hasHomeTemplate;
    _Bool _hasSuccess;
    _Bool _hasResultCode;
    _Bool _hasResultMsg;
    _Bool _hasPublicBizType;
    _Bool _hasMsgSwitchOn;
    _Bool _followed;
    _Bool _alreadyLiked;
    _Bool _uploadGis;
    _Bool _success;
    _Bool _msgSwitchOn;
    int _resultCode;
    NSString *_publicId;
    PublicLifeInfo *_publicLifeInfo;
    NSMutableArray *_menuList;
    NSMutableArray *_dynamicInfoList;
    PublicDesc *_publicDesc;
    PhotoInfo *_photoInfo;
    NSMutableArray *_extendAreaList;
    HomeTemplate *_homeTemplate;
    NSMutableArray *_messagePayloadList;
    NSMutableArray *_messageActionList;
    NSMutableArray *_recallBroadIdList;
    NSString *_resultMsg;
    NSString *_publicBizType;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) _Bool msgSwitchOn; // @synthesize msgSwitchOn=_msgSwitchOn;
@property(retain, nonatomic) NSString *publicBizType; // @synthesize publicBizType=_publicBizType;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSMutableArray *recallBroadIdList; // @synthesize recallBroadIdList=_recallBroadIdList;
@property(retain, nonatomic) NSMutableArray *messageActionList; // @synthesize messageActionList=_messageActionList;
@property(retain, nonatomic) NSMutableArray *messagePayloadList; // @synthesize messagePayloadList=_messagePayloadList;
@property(retain, nonatomic) HomeTemplate *homeTemplate; // @synthesize homeTemplate=_homeTemplate;
@property(nonatomic) _Bool uploadGis; // @synthesize uploadGis=_uploadGis;
@property(retain, nonatomic) NSMutableArray *extendAreaList; // @synthesize extendAreaList=_extendAreaList;
@property(retain, nonatomic) PhotoInfo *photoInfo; // @synthesize photoInfo=_photoInfo;
@property(retain, nonatomic) PublicDesc *publicDesc; // @synthesize publicDesc=_publicDesc;
@property(retain, nonatomic) NSMutableArray *dynamicInfoList; // @synthesize dynamicInfoList=_dynamicInfoList;
@property(retain, nonatomic) NSMutableArray *menuList; // @synthesize menuList=_menuList;
@property(nonatomic) _Bool alreadyLiked; // @synthesize alreadyLiked=_alreadyLiked;
@property(nonatomic) _Bool followed; // @synthesize followed=_followed;
@property(retain, nonatomic) PublicLifeInfo *publicLifeInfo; // @synthesize publicLifeInfo=_publicLifeInfo;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(readonly) _Bool hasMsgSwitchOn; // @synthesize hasMsgSwitchOn=_hasMsgSwitchOn;
@property(readonly) _Bool hasPublicBizType; // @synthesize hasPublicBizType=_hasPublicBizType;
@property(readonly) _Bool hasResultMsg; // @synthesize hasResultMsg=_hasResultMsg;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
@property(readonly) _Bool hasHomeTemplate; // @synthesize hasHomeTemplate=_hasHomeTemplate;
@property(readonly) _Bool hasUploadGis; // @synthesize hasUploadGis=_hasUploadGis;
@property(readonly) _Bool hasPhotoInfo; // @synthesize hasPhotoInfo=_hasPhotoInfo;
@property(readonly) _Bool hasPublicDesc; // @synthesize hasPublicDesc=_hasPublicDesc;
@property(readonly) _Bool hasAlreadyLiked; // @synthesize hasAlreadyLiked=_hasAlreadyLiked;
@property(readonly) _Bool hasFollowed; // @synthesize hasFollowed=_hasFollowed;
@property(readonly) _Bool hasPublicLifeInfo; // @synthesize hasPublicLifeInfo=_hasPublicLifeInfo;
@property(readonly) _Bool hasPublicId; // @synthesize hasPublicId=_hasPublicId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addRecallBroadIdList:(id)arg1;
- (void)setRecallBroadIdListArray:(id)arg1;
- (void)addMessageActionList:(id)arg1;
- (void)setMessageActionListArray:(id)arg1;
- (void)addMessagePayloadList:(id)arg1;
- (void)setMessagePayloadListArray:(id)arg1;
- (void)addExtendAreaList:(id)arg1;
- (void)setExtendAreaListArray:(id)arg1;
- (void)addDynamicInfoList:(id)arg1;
- (void)setDynamicInfoListArray:(id)arg1;
- (void)addMenuList:(id)arg1;
- (void)setMenuListArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

