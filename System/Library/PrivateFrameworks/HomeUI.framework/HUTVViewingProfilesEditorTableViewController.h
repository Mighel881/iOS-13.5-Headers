/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUItemTableModuleControllerHosting.h>

@class HUTVViewingProfilesDevicesModuleController, NSString;

@interface HUTVViewingProfilesEditorTableViewController : HUItemTableViewController <HUItemTableModuleControllerHosting> {

	BOOL _hideHeadersAndFooters;
	HUTVViewingProfilesDevicesModuleController* _tvpDevicesModuleController;

}

@property (nonatomic,readonly) HUTVViewingProfilesDevicesModuleController * tvpDevicesModuleController;              //@synthesize tvpDevicesModuleController=_tvpDevicesModuleController - In the implementation block
@property (assign,nonatomic) BOOL hideHeadersAndFooters;                                                             //@synthesize hideHeadersAndFooters=_hideHeadersAndFooters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2 ;
-(id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(HUTVViewingProfilesDevicesModuleController *)tvpDevicesModuleController;
-(BOOL)hideHeadersAndFooters;
-(id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2 ;
-(id)initWithUserItem:(id)arg1 ;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(id)itemModuleControllers;
-(void)setHideHeadersAndFooters:(BOOL)arg1 ;
@end

