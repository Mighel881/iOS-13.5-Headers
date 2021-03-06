/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OFNSOperation.h>

@class CLGeocoder, CLLocation, NSArray;

@interface OFCLGeocoderOperation : OFNSOperation {

	CLGeocoder* _geocoder;
	CLLocation* _location;
	double _accuracy;
	NSArray* _placemarks;

}

@property (retain) NSArray * placemarks;              //@synthesize placemarks=_placemarks - In the implementation block
+(id)operationWithLocation:(id)arg1 ;
+(double)recommendedAccuracy;
+(id)operationWithLocation:(id)arg1 accuracy:(double)arg2 ;
-(void)dealloc;
-(void)cancelOperation;
-(void)setPlacemarks:(NSArray *)arg1 ;
-(NSArray *)placemarks;
-(unsigned long long)launchOperation;
-(void)finishOperation;
-(void)cleanupOperation;
-(id)initWithLocation:(id)arg1 accuracy:(double)arg2 ;
@end

