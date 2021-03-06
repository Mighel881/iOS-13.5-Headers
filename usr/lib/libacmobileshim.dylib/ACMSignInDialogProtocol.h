/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ACMSignInDialogProtocol <NSObject>
@property (assign) id<ACMSignInDialogDelegate> delegate; 
@property (nonatomic,retain) NSString * requestedUserName; 
@property (readonly) NSString * userNameString; 
@property (assign) NSString * passwordString; 
@required
-(id<ACMSignInDialogDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancel;
-(NSString *)userNameString;
-(NSString *)requestedUserName;
-(void)disableControls:(BOOL)arg1;
-(NSString *)passwordString;
-(void)setPasswordString:(id)arg1;
-(void)setRequestedUserName:(id)arg1;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

