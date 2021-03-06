/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@class NSDate;

@interface SBDataPlanExpirationAlertItem : SBDataPlanAccountAlertItem {

	NSDate* _expirationDate;

}

@property (nonatomic,retain) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)initWithAccountURL:(id)arg1 expirationDate:(id)arg2 ;
@end

