/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class NSHashTable, CCUIContentModuleContext, CCUICAPackageDescription, UIImage, UIColor, NSString;

@interface CCUIToggleModule : NSObject <CCUIContentModule> {

	NSHashTable* _contentViewControllers;
	CCUIContentModuleContext* _contentModuleContext;
	CCUICAPackageDescription* _glyphPackageDescription;

}

@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (nonatomic,copy,readonly) UIImage * iconGlyph; 
@property (nonatomic,copy,readonly) UIImage * selectedIconGlyph; 
@property (nonatomic,copy,readonly) UIColor * selectedColor; 
@property (nonatomic,copy,readonly) CCUICAPackageDescription * glyphPackageDescription;                                            //@synthesize glyphPackageDescription=_glyphPackageDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * glyphState; 
@property (nonatomic,readonly) double glyphScale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)refreshState;
-(UIColor *)selectedColor;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(NSString *)glyphState;
-(double)glyphScale;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)reconfigureView;
-(id)contentViewControllerForContext:(id)arg1 ;
-(UIImage *)iconGlyph;
-(UIImage *)selectedIconGlyph;
-(id)glyphPackage;
@end
