/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapItemIdentifier;

@interface MKMapItemIdentifier : NSObject <NSCopying> {

	GEOMapItemIdentifier* _geoMapItemIdentifier;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)muid;
-(id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(CLLocationCoordinate2D)arg3 ;
-(id)initWithMUID:(unsigned long long)arg1 coordinate:(CLLocationCoordinate2D)arg2 ;
-(id)initWithMUID:(unsigned long long)arg1 ;
-(id)initWithGEOMapItemIdentifier:(id)arg1 ;
-(id)geoMapItemIdentifier;
@end

