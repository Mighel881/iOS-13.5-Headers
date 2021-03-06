/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSString, NSData, NSUUID;


@protocol HMDSettingModelProtocol <HMDSettingModelBaseProtocol>
@property (nonatomic,copy) NSNumber * type; 
@property (nonatomic,copy) NSNumber * properties; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * numberValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSData * dataValue; 
@property (nonatomic,copy) NSUUID * selectionIdentifier; 
@property (nonatomic,copy) NSString * selectionValue; 
@required
-(NSString *)name;
-(NSNumber *)type;
-(void)setType:(id)arg1;
-(NSString *)stringValue;
-(void)setName:(id)arg1;
-(NSNumber *)properties;
-(void)setStringValue:(id)arg1;
-(void)setProperties:(id)arg1;
-(void)setDataValue:(id)arg1;
-(NSData *)dataValue;
-(NSNumber *)numberValue;
-(void)setNumberValue:(id)arg1;
-(NSUUID *)selectionIdentifier;
-(NSString *)selectionValue;
-(void)setSelectionIdentifier:(id)arg1;
-(void)setSelectionValue:(id)arg1;
-(BOOL)setSettingValue:(id)arg1;

@end

