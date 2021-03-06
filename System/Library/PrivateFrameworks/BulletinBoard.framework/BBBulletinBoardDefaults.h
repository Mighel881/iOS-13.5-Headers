/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface BBBulletinBoardDefaults : BSAbstractDefaultDomain

@property (assign,nonatomic) long long globalContentPreviewSetting; 
@property (assign,nonatomic) long long globalSpokenNotificationSetting; 
@property (assign,getter=isSpokenNotificationsSupported,nonatomic) BOOL spokenNotificationsSupported; 
+(id)standardDefaults;
-(void)setSpokenNotificationsSupported:(BOOL)arg1 ;
-(BOOL)isSpokenNotificationsSupported;
-(void)setGlobalSpokenNotificationSetting:(long long)arg1 ;
-(long long)globalSpokenNotificationSetting;
-(void)setGlobalContentPreviewSetting:(long long)arg1 ;
-(long long)globalContentPreviewSetting;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

