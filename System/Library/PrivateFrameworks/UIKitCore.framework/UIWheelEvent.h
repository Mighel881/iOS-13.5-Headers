/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@class NSMutableArray;

@interface UIWheelEvent : UIEvent {

	long long _recentScrollDistance;
	NSMutableArray* _recentScrollEvents;
	long long lastSubtype;

}
-(long long)type;
-(long long)subtype;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_sendEventToResponder:(id)arg1 ;
-(BOOL)_canHaveVelocity;
-(double)_wheelVelocity;
@end

