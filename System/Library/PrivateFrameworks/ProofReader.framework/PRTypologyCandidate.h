/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString, NSTextCheckingResult;

@interface PRTypologyCandidate : NSObject {

	NSString* _candidateString;
	NSRange _selectedRange;
	NSTextCheckingResult* _result;
	double _openTime;
	double _closeTime;
	BOOL _isOpen;

}
+(id)openTypologyCandidate:(id)arg1 selectedRange:(NSRange)arg2 inString:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithString:(id)arg1 range:(NSRange)arg2 ;
-(void)closeTypologyCandidateWithResult:(id)arg1 ;
@end

