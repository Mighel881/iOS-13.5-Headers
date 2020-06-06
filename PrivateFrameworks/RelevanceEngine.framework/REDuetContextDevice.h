/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface REDuetContextDevice : NSObject {

	NSUUID* _identifier;
	unsigned long long _deviceType;

}

@property (nonatomic,readonly) NSUUID * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceType;              //@synthesize deviceType=_deviceType - In the implementation block
+(id)localDevice;
+(id)companionDevice;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(unsigned long long)deviceType;
-(id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 ;
@end
