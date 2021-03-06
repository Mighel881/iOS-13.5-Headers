/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCChannelIssuesGroupEmittingOperation : FCFeedGroupEmittingOperation {

	NSString* _channelIdentifier;

}

@property (nonatomic,retain) NSString * channelIdentifier;              //@synthesize channelIdentifier=_channelIdentifier - In the implementation block
-(id)init;
-(NSString *)channelIdentifier;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(void)performOperation;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 channelIdentifier:(id)arg5 ;
@end

