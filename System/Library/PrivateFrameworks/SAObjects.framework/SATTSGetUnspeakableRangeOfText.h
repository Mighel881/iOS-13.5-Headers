/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SATTSGetUnspeakableRangeOfText : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSArray * texts; 
+(id)getUnspeakableRangeOfText;
+(id)getUnspeakableRangeOfTextWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)texts;
-(void)setTexts:(NSArray *)arg1 ;
@end

