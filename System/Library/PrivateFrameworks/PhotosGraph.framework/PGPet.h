/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGGraphIngestPet.h>

@class NSSet, NSMutableSet, NSString;

@interface PGPet : NSObject <PGGraphIngestPet> {

	NSMutableSet* _momentNodes;
	NSMutableSet* _ownerNodes;

}

@property (nonatomic,readonly) NSMutableSet * momentNodes;              //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,readonly) NSMutableSet * ownerNodes;               //@synthesize ownerNodes=_ownerNodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)momentNodes;
-(NSMutableSet *)ownerNodes;
-(id)initWithMomentNodes:(id)arg1 ownerNodes:(id)arg2 ;
@end

