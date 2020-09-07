/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary, NSString;

@interface VTUIStringsHelper : NSObject {

	NSDictionary* _localizedStringTable;
	NSMutableDictionary* _languageLocalizedStringTables;
	NSString* _siriLanguageCode;
	NSString* _heySiriTriggerPhrase;

}

@property (nonatomic,readonly) NSString * heySiriTriggerPhrase;              //@synthesize heySiriTriggerPhrase=_heySiriTriggerPhrase - In the implementation block
+(void)initialize;
+(id)sharedStringsHelper;
-(id)init;
-(void)localeDidChange:(id)arg1 ;
-(void)setSiriLanguage:(id)arg1 ;
-(NSString *)heySiriTriggerPhrase;
-(void)setupForCurrentLocaleAndSiriLanguage;
-(id)uiLocalizedStringForKey:(id)arg1 ;
-(id)_bundleStringTableForLanguages:(id)arg1 inLocalizedStringsFileName:(id)arg2 ;
-(id)_bundleStringTableForAllValidLanguages:(id)arg1 inLocalizedStringsFileName:(id)arg2 ;
-(id)_siriLanguageSubstitutedString:(id)arg1 ;
-(id)uiLocalizedStringForKey:(id)arg1 languageCode:(id)arg2 ;
-(id)siriLanguageStringForKey:(id)arg1 ;
-(id)localizedAudioStringForKey:(id)arg1 ;
@end
