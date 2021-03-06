/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEODataSession;
#import <GeoServices/GeoServices-Structs.h>
@interface GEOProtobufSession : NSObject {

	id<GEODataSession> _dataSession;
	AQ _lastTaskIdentifier;

}

@property (nonatomic,readonly) id<GEODataSession> dataSession;              //@synthesize dataSession=_dataSession - In the implementation block
+(id)sharedProtobufSession;
+(id)sharedDelegateQueue;
-(id)init;
-(id<GEODataSession>)dataSession;
-(id)taskWithRequestKind:(SCD_Struct_GE94)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(BOOL)arg5 auditToken:(id)arg6 traits:(id)arg7 delegate:(id)arg8 delegateQueue:(id)arg9 requestCounterTicket:(id)arg10 multipathServiceType:(unsigned long long)arg11 multipathAlternatePort:(unsigned long long)arg12 throttleToken:(id)arg13 ;
-(id)initWithDataSession:(id)arg1 ;
-(id)taskWithRequest:(id)arg1 requestTypeCode:(unsigned)arg2 responseClass:(Class)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
@end

