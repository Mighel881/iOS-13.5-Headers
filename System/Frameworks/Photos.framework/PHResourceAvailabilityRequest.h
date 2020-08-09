/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAvailabilityRequest.h>

@protocol PLResourceIdentity;
@interface PHResourceAvailabilityRequest : PHAvailabilityRequest {

	id<PLResourceIdentity> _resourceIdentity;

}

@property (nonatomic,readonly) id<PLResourceIdentity> resourceIdentity;              //@synthesize resourceIdentity=_resourceIdentity - In the implementation block
-(id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2 ;
-(id)plistDictionary;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 resourceIdentity:(id)arg3 ;
-(id<PLResourceIdentity>)resourceIdentity;
@end
