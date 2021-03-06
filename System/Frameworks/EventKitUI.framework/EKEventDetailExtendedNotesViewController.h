/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@class UITextView, NSString;

@interface EKEventDetailExtendedNotesViewController : UIViewController <EKEditItemViewControllerProtocol> {

	UITextView* _textView;
	NSString* _notes;

}

@property (nonatomic,copy) NSString * notes;                                                        //@synthesize notes=_notes - In the implementation block
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(id)init;
-(void)loadView;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewSafeAreaInsetsDidChange;
-(void)_updateConstraints;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(void)loadTextView;
-(void)updateTextView;
@end

