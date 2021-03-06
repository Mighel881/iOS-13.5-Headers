/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUChoicePattern : NUPattern {

	NSArray* _choices;

}

@property (readonly) NSArray * choices;              //@synthesize choices=_choices - In the implementation block
-(id)init;
-(id)stringRepresentation;
-(id)tokens;
-(NSArray *)choices;
-(id)shortestMatch;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(BOOL)isFixedOrder;
-(id)initWithChoices:(id)arg1 ;
-(BOOL)isEqualToChoicePattern:(id)arg1 ;
@end

