/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <libobjc.A.dylib/CSCoverSheetViewTransitionSource.h>
#import <libobjc.A.dylib/CSExternalAppearanceProviding.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>

@protocol CSLocketTransitionDelegate;
@class CSComponent, NSString, NSSet, _UILegibilitySettings, UIColor;

@interface CSLocketTransitionSource : NSObject <CSCoverSheetViewTransitionSource, CSExternalAppearanceProviding, CSExternalBehaviorProviding> {

	id<CSLocketTransitionDelegate> _transitioningDelegate;
	long long _transitionType;
	CSComponent* _scalableContent;
	SCD_Struct_CS6 _transitionContext;

}

@property (assign,nonatomic) long long transitionType;                                                 //@synthesize transitionType=_transitionType - In the implementation block
@property (nonatomic,retain) CSComponent * scalableContent;                                            //@synthesize scalableContent=_scalableContent - In the implementation block
@property (assign,nonatomic,__weak) id<CSLocketTransitionDelegate> transitioningDelegate;              //@synthesize transitioningDelegate=_transitioningDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) SCD_Struct_CS7 transitionContext;                                       //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
-(NSSet *)components;
-(UIColor *)backgroundColor;
-(SCD_Struct_CS7)transitionContext;
-(void)setTransitioningDelegate:(id<CSLocketTransitionDelegate>)arg1 ;
-(id<CSLocketTransitionDelegate>)transitioningDelegate;
-(_UILegibilitySettings *)legibilitySettings;
-(BOOL)isTransitioning;
-(long long)backgroundStyle;
-(void)cancelTransition;
-(NSString *)appearanceIdentifier;
-(long long)transitionType;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(void)setTransitionType:(long long)arg1 ;
-(long long)participantState;
-(void)updatePresentationWithProgress:(double)arg1 ;
-(NSString *)coverSheetIdentifier;
-(void)cleanupPresentation;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(void)prepareForPresentation;
-(CSComponent *)scalableContent;
-(void)setScalableContent:(CSComponent *)arg1 ;
@end
