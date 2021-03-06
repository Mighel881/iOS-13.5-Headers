/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
@interface AssistiveTouchHelper : NSObject
+(void)initializeMonitoring;
-(id)init;
-(void)dealloc;
-(void)enable;
-(id)_astDispatchQueue;
-(void)_sendKeyboardStatusUpdate:(CGRect)arg1 ;
-(void)_sendKeyboardStatusUpdateHidden;
-(void)_sendKeyboardStatusUpdate;
-(void)_sendSafeAreaUpdate;
-(void)installMediaCategoriesAndValidate;
-(void)installiPodUICategoriesAndValidate;
-(void)installKeyboardListener;
-(void)installMediaControlsListener;
-(void)loadBuddyBundles;
-(void)_handleMediaPlaybackEnded;
@end

