/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PVNotification : NSObject {

	NSString* _name;
	id _details;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id details;                   //@synthesize details=_details - In the implementation block
+(id)notificationWithName:(id)arg1 ;
+(id)notificationWithName:(id)arg1 details:(id)arg2 ;
-(id)description;
-(NSString *)name;
-(id)details;
-(id)initWithName:(id)arg1 details:(id)arg2 ;
@end
