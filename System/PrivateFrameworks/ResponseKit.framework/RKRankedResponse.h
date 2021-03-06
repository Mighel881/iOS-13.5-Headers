/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RKRankedResponse : NSObject {

	NSString* _response;
	unsigned long long _inputMethod;
	double _score;

}

@property (retain) NSString * response;                         //@synthesize response=_response - In the implementation block
@property (assign) unsigned long long inputMethod;              //@synthesize inputMethod=_inputMethod - In the implementation block
@property (assign) double score;                                //@synthesize score=_score - In the implementation block
-(double)score;
-(void)setScore:(double)arg1 ;
-(NSString *)response;
-(void)setResponse:(NSString *)arg1 ;
-(id)initWithResponse:(id)arg1 inputMethod:(unsigned long long)arg2 score:(double)arg3 ;
-(unsigned long long)inputMethod;
-(void)setInputMethod:(unsigned long long)arg1 ;
@end

