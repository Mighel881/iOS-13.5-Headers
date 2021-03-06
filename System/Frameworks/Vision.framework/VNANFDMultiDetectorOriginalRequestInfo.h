/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VNANFDMultiDetectorOriginalRequestInfo : NSObject {

	NSString* _requestRevisionKey;
	unsigned long long _originalRequestResultsIndex;

}

@property (readonly) NSString * requestRevisionKey;                               //@synthesize requestRevisionKey=_requestRevisionKey - In the implementation block
@property (readonly) unsigned long long originalRequestResultsIndex;              //@synthesize originalRequestResultsIndex=_originalRequestResultsIndex - In the implementation block
-(id)initWithProcessingOptionRequestRevisionKey:(id)arg1 originalRequestResultsIndex:(unsigned long long)arg2 ;
-(NSString *)requestRevisionKey;
-(unsigned long long)originalRequestResultsIndex;
@end

