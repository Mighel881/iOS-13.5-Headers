/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIInputViewController.h>

@class CKMessageEntryView;

@interface CKMessageEntryViewController : UIInputViewController {

	BOOL _inputAccessoryViewControllerEnabled;
	CKMessageEntryView* _entryView;

}

@property (nonatomic,readonly) CKMessageEntryView * entryView;                      //@synthesize entryView=_entryView - In the implementation block
@property (assign,nonatomic) BOOL inputAccessoryViewControllerEnabled;              //@synthesize inputAccessoryViewControllerEnabled=_inputAccessoryViewControllerEnabled - In the implementation block
+(BOOL)_requiresProxyInterface;
-(void)loadView;
-(CKMessageEntryView *)entryView;
-(BOOL)inputAccessoryViewControllerEnabled;
-(id)initWithEntryView:(id)arg1 ;
-(void)setInputAccessoryViewControllerEnabled:(BOOL)arg1 ;
@end

