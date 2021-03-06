//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBCharacteristic, CBPeripheral, CBService, NSData, NSDictionary, NSNumber;

@protocol WDPeripheralDelegate <NSObject>
- (void)disconnect;
- (void)onResponse:(NSData *)arg1 from:(CBCharacteristic *)arg2;
- (void)onWritingComplete;
- (void)onExpectCharacteristicFound:(CBCharacteristic *)arg1;
- (void)onTargetPeripheralConnected:(CBPeripheral *)arg1;
- (void)onCandidatePeripheralFound:(CBPeripheral *)arg1 rssi:(NSNumber *)arg2;
- (_Bool)ifExpectedReadCharacteristic:(CBCharacteristic *)arg1;
- (_Bool)ifExpectedWriteCharacteristic:(CBCharacteristic *)arg1;
- (_Bool)ifExpectedService:(CBService *)arg1;
- (_Bool)ifExpectedPeripheral:(CBPeripheral *)arg1 advertisementData:(NSDictionary *)arg2;
@end

