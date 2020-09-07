/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHFacePropertySet.h>

@protocol PHFacePropertySet <PHObjectPropertySet>
@required
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(BOOL)arg3;

@end


@class PHFace, NSString;

@interface PHFacePropertySet : NSObject <PHFacePropertySet> {

	PHFace* _face;

}

@property (nonatomic,__weak,readonly) PHFace * face;                //@synthesize face=_face - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertiesToFetch;
+(id)entityName;
+(BOOL)isToMany;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToPrefetch;
-(PHFace *)face;
-(id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(BOOL)arg3 ;
@end
