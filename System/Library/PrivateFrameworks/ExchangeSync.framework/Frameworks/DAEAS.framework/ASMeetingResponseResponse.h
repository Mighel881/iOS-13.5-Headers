/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSMutableArray, NSArray;

@interface ASMeetingResponseResponse : ASItem {

	NSMutableArray* _mSingularResponses;

}

@property (nonatomic,retain) NSMutableArray * mSingularResponses;              //@synthesize mSingularResponses=_mSingularResponses - In the implementation block
@property (nonatomic,readonly) NSArray * singularResponses; 
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(id)description;
-(NSArray *)singularResponses;
-(void)setMSingularResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mSingularResponses;
-(void)_addSingularResponse:(id)arg1 ;
@end

