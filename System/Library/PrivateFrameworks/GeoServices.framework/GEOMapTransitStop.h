/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapTransitStop <GEOMapTransitPoint>
@property (nonatomic,readonly) unsigned long long hallID; 
@required
-(unsigned long long)hallID;
-(id)findHall:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findLinksIn:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findLinksOut:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;

@end

