/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface MKWebContentBlocker : NSObject {

	NSCache* _regularExpressionCache;

}
+(id)sharedBlocker;
-(id)_regularExpression;
-(BOOL)shouldBlockLoadingOfURL:(id)arg1 ;
@end
