/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IntentsFoundation/IntentsFoundation-Structs.h>
@interface IFObjectHasher : NSObject {

	SipHasher _hasher;
	unsigned long long _hash;
	BOOL _finalized;

}
-(unsigned long long)finalize;
-(id)combine:(id)arg1 ;
-(id)combineContentsOfPropertyListObject:(id)arg1 ;
-(id)combineInteger:(unsigned long long)arg1 ;
-(id)combineBool:(BOOL)arg1 ;
-(id)combineBytes:(void*)arg1 size:(unsigned long long)arg2 ;
@end

