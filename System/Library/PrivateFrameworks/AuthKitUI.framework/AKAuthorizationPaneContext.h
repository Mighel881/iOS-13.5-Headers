/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AKAuthorizationPaneViewController, UIStackView, NSMutableArray;

@interface AKAuthorizationPaneContext : NSObject {

	AKAuthorizationPaneViewController* _paneViewController;
	UIStackView* _stackView;
	NSMutableArray* _internalMutableConstraints;

}

@property (nonatomic,retain) NSMutableArray * internalMutableConstraints;                           //@synthesize internalMutableConstraints=_internalMutableConstraints - In the implementation block
@property (nonatomic,readonly) AKAuthorizationPaneViewController * paneViewController;              //@synthesize paneViewController=_paneViewController - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                                             //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableConstraints; 
-(UIStackView *)stackView;
-(id)initWithPaneViewController:(id)arg1 stackView:(id)arg2 ;
-(NSMutableArray *)mutableConstraints;
-(void)addSubPane:(id)arg1 ;
-(AKAuthorizationPaneViewController *)paneViewController;
-(NSMutableArray *)internalMutableConstraints;
-(id)initWithPaneViewController:(id)arg1 stackView:(id)arg2 mutableConstraints:(id)arg3 ;
-(void)setInternalMutableConstraints:(NSMutableArray *)arg1 ;
@end

