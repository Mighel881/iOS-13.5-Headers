/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CARAutomaticDNDStatus;

@interface CARDNDUtility : NSObject {

	CARAutomaticDNDStatus* _DNDStatus;

}

@property (nonatomic,retain) CARAutomaticDNDStatus * DNDStatus;              //@synthesize DNDStatus=_DNDStatus - In the implementation block
+(id)sharedInstance;
-(CARAutomaticDNDStatus *)DNDStatus;
-(id)outputFromRhodesUtility;
-(void)setDNDStatus:(CARAutomaticDNDStatus *)arg1 ;
@end
