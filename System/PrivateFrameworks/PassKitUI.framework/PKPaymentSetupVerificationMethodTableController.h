/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class PKActivationMethodTableViewCell, PKPaymentVerificationController, NSArray, NSString;

@interface PKPaymentSetupVerificationMethodTableController : NSObject <UITableViewDelegate, UITableViewDataSource> {

	PKActivationMethodTableViewCell* _sizingCell;
	PKPaymentVerificationController* _verificationController;
	NSArray* _verificationChannels;
	unsigned long long _selectedIndex;

}

@property (nonatomic,readonly) PKPaymentVerificationController * verificationController;              //@synthesize verificationController=_verificationController - In the implementation block
@property (nonatomic,retain) NSArray * verificationChannels;                                          //@synthesize verificationChannels=_verificationChannels - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex;                                        //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(NSArray *)verificationChannels;
-(void)setVerificationChannels:(NSArray *)arg1 ;
-(id)initWithVerificationController:(id)arg1 ;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(PKPaymentVerificationController *)verificationController;
-(id)newVerificationRequest;
-(id)_detailTextLabelForChannel:(id)arg1 ;
@end

