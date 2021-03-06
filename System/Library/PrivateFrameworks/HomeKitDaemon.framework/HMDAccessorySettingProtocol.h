/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol HMDAccessorySettingProtocol <NSObject>
@property (readonly) long long type; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * constraints; 
@property (copy,readonly) id value; 
@required
-(NSString *)name;
-(long long)type;
-(NSArray *)constraints;
-(id)value;

@end

