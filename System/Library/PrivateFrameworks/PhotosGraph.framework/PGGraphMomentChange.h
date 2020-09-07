/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSString, PGGraphMomentNode;

@interface PGGraphMomentChange : PGGraphChange {

	NSString* _momentLocalIdentifier;
	PGGraphMomentNode* _momentNode;
	unsigned long long _updateTypes;

}

@property (nonatomic,readonly) NSString * momentLocalIdentifier;              //@synthesize momentLocalIdentifier=_momentLocalIdentifier - In the implementation block
@property (nonatomic,retain) PGGraphMomentNode * momentNode;                  //@synthesize momentNode=_momentNode - In the implementation block
@property (nonatomic,readonly) unsigned long long updateTypes;                //@synthesize updateTypes=_updateTypes - In the implementation block
-(id)description;
-(unsigned long long)type;
-(id)initWithMomentLocalIdentifier:(id)arg1 updateTypes:(unsigned long long)arg2 ;
-(void)mergeChange:(id)arg1 ;
-(NSString *)momentLocalIdentifier;
-(PGGraphMomentNode *)momentNode;
-(void)setMomentNode:(PGGraphMomentNode *)arg1 ;
-(unsigned long long)updateTypes;
@end
