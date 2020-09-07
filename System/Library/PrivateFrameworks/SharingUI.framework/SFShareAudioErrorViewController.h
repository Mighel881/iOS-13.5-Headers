/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharingUI/SFShareAudioBaseViewController.h>

@class UILabel, UIButton, NSError;

@interface SFShareAudioErrorViewController : SFShareAudioBaseViewController {

	UILabel* _infoLabel;
	UILabel* _internalLabel;
	UIButton* _dismissButton;
	NSError* _error;

}

@property (nonatomic,retain) UILabel * infoLabel;                   //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UILabel * internalLabel;               //@synthesize internalLabel=_internalLabel - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;              //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,copy) NSError * error;                         //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(UILabel *)infoLabel;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(void)eventDismiss:(id)arg1 ;
-(UILabel *)internalLabel;
-(void)setInternalLabel:(UILabel *)arg1 ;
@end
