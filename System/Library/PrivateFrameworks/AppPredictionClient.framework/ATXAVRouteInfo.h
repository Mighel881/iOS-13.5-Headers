/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATXAVRouteInfo : NSObject <NSSecureCoding> {

	BOOL _isExternalRoute;
	NSString* _deviceName;
	NSString* _deviceID;

}

@property (nonatomic,readonly) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * deviceID;                //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) BOOL isExternalRoute;               //@synthesize isExternalRoute=_isExternalRoute - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceID;
-(NSString *)deviceName;
-(id)initWithDeviceName:(id)arg1 deviceID:(id)arg2 isExternalRoute:(BOOL)arg3 ;
-(BOOL)isExternalRoute;
@end

