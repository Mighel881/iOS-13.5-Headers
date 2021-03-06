/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIInteractionProgress.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPinchGestureRecognizer, NSString;

@interface SBPinchInteractionProgress : UIInteractionProgress <UIGestureRecognizerDelegate> {

	SCD_Struct_SB5 _pinchInterval;
	UIPinchGestureRecognizer* _pinchGesture;

}

@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGesture;              //@synthesize pinchGesture=_pinchGesture - In the implementation block
@property (nonatomic,readonly) double minPinchScale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handlePinchGesture:(id)arg1 ;
-(UIPinchGestureRecognizer *)pinchGesture;
-(void)_updatePinchScale:(double)arg1 ;
-(double)minPinchScale;
-(id)initWithPinchGesture:(id)arg1 minPinchScale:(double)arg2 ;
@end

