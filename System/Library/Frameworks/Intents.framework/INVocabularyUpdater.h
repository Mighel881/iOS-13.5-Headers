/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/_INVocabularyConnection.h>

@interface INVocabularyUpdater : _INVocabularyConnection
+(id)_sharedAppInstance;
+(void)clearAllCustomVocabulary;
-(void)setValidatedVocabulary:(id)arg1 forIntentSlot:(id)arg2 validationCompletion:(/*^block*/id)arg3 ;
-(void)setCustomPhotoAlbumNames:(id)arg1 ;
@end

