/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:06:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@protocol OS_dispatch_queue;
@class AVSpeechSynthesizer, NSDictionary, NSArray, NSObject, NSString;

@interface SpeakCorrections : NSObject <AVSpeechSynthesizerDelegate> {

	AVSpeechSynthesizer* _synthesizer;
	BOOL _correctionCanceled;
	NSDictionary* _keyboardToLanguage;
	NSArray* _availableLanguageCodes;
	NSObject*<OS_dispatch_queue> _speakingQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)disable;
+(void)enable;
+(void)_updateRingerState;
+(void)_safeUpdateRingerState;
+(void)updateStatus;
-(id)init;
-(void)dealloc;
-(void)_correctionDisplayed:(id)arg1 ;
-(void)_ringerChanged:(id)arg1 ;
-(void)_speakCorrection:(id)arg1 ;
-(void)loadUIAccessibilityIfNecessary;
@end
