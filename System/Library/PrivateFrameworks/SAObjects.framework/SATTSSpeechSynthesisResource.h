/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SATTSSpeechSynthesisResource : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * resourceVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speechSynthesisResource;
+(id)speechSynthesisResourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)languageCode;
-(id)groupIdentifier;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)resourceVersion;
-(id)encodedClassName;
-(void)setResourceVersion:(NSString *)arg1 ;
@end
