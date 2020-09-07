/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLPhotoAnalysisPersonSuggestion : NSObject {

	BOOL _confirmed;
	long long _keyFaceClusterSequenceNumber;
	NSString* _keyFaceLocalIdentifier;
	NSString* _personLocalIdentifier;
	long long _personFaceCount;

}

@property (nonatomic,readonly) long long keyFaceClusterSequenceNumber;              //@synthesize keyFaceClusterSequenceNumber=_keyFaceClusterSequenceNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyFaceLocalIdentifier;              //@synthesize keyFaceLocalIdentifier=_keyFaceLocalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * personLocalIdentifier;               //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (nonatomic,readonly) long long personFaceCount;                           //@synthesize personFaceCount=_personFaceCount - In the implementation block
@property (nonatomic,readonly) BOOL confirmed;                                      //@synthesize confirmed=_confirmed - In the implementation block
-(id)description;
-(id)initWithSuggestionDictionary:(id)arg1 ;
-(id)suggestionDictionaryRepresentation;
-(long long)keyFaceClusterSequenceNumber;
-(NSString *)keyFaceLocalIdentifier;
-(NSString *)personLocalIdentifier;
-(long long)personFaceCount;
-(BOOL)confirmed;
@end
