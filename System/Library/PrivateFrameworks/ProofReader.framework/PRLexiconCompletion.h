/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRLexiconCompletion : NSObject {

	unsigned _tokenID;
	double _score;

}

@property (readonly) unsigned tokenID;              //@synthesize tokenID=_tokenID - In the implementation block
@property (readonly) double score;                  //@synthesize score=_score - In the implementation block
-(id)description;
-(double)score;
-(unsigned)tokenID;
-(id)initWithTokenID:(unsigned)arg1 score:(double)arg2 ;
@end

