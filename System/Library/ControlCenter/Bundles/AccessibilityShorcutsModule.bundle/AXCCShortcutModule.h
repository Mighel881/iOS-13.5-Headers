/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityShorcutsModule.bundle/AccessibilityShorcutsModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/CCUIToggleModule.h>
#import <libobjc.A.dylib/AXCCShortcutModuleViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModule.h>

@class AXCCShortcutModuleViewController, CCUIContentModuleContext, NSString;

@interface AXCCShortcutModule : CCUIToggleModule <AXCCShortcutModuleViewControllerDelegate, CCUIContentModule> {

	AXCCShortcutModuleViewController* _contentViewController;
	CCUIContentModuleContext* _contentModuleContext;

}

@property (nonatomic,retain) AXCCShortcutModuleViewController * contentViewController;                                             //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)init;
-(BOOL)isSelected;
-(void)setContentViewController:(AXCCShortcutModuleViewController *)arg1 ;
-(AXCCShortcutModuleViewController *)contentViewController;
-(void)expandModule;
-(id)glyphState;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)optionToggled;
-(void)openAccessibilityShortcutSettings;
@end
