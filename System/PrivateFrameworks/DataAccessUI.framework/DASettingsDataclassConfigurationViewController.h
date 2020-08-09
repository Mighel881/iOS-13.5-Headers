/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController {

	DAAccount* _daAccount;
	BOOL _haveRegisteredForAccountsChanged;

}

@property (nonatomic,retain) DAAccount * daAccount;              //@synthesize daAccount=_daAccount - In the implementation block
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)specifiers;
-(id)_navTitle;
-(void)_accountsChanged:(id)arg1 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(BOOL)shouldVerifyBeforeAccountSave;
-(id)otherSpecifiers;
-(Class)accountInfoControllerClass;
-(void)reloadAccount;
-(void)cancelButtonClicked:(id)arg1 ;
-(DAAccount *)daAccount;
-(id)accountDescriptionForFirstTimeSetup;
-(void)_listenForAccountsChangedNotifications;
-(id)accountFromSpecifier;
-(void)setDaAccount:(DAAccount *)arg1 ;
@end
