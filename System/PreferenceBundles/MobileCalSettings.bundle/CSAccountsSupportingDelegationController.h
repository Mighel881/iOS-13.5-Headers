/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:04:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, EKEventStore;

@interface CSAccountsSupportingDelegationController : PSListController {

	NSArray* _accountsSupportingDelegation;
	EKEventStore* _eventStore;

}
-(id)init;
-(id)specifiers;
-(void)reloadDelegates;
-(id)specifiersForAccountsSupportingDelegation;
@end

