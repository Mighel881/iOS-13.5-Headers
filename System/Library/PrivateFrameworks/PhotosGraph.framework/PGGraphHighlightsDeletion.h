/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphHighlightsDeletion : PGGraphChange {

	NSSet* _highlightLocalIdentifiers;

}

@property (nonatomic,readonly) NSSet * highlightLocalIdentifiers;              //@synthesize highlightLocalIdentifiers=_highlightLocalIdentifiers - In the implementation block
-(id)description;
-(unsigned long long)type;
-(unsigned long long)changeCount;
-(id)initWithHighlightLocalIdentifiers:(id)arg1 ;
-(NSSet *)highlightLocalIdentifiers;
@end
