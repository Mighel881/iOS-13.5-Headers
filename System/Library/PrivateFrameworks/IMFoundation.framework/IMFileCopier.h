/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMFileCopierDelegate, OS_dispatch_queue;
@class NSURL, NSObject;

@interface IMFileCopier : NSObject {

	BOOL _shouldCancel;
	BOOL _didErrorOccur;
	BOOL _inProgress;
	id<IMFileCopierDelegate> _delegate;
	NSURL* _inputURL;
	NSURL* _outputURL;
	id _identifier;
	unsigned long long _operation;
	void* _BOMCopier;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _callback;

}

@property (assign) void* _BOMCopier;                                 //@synthesize BOMCopier=_BOMCopier - In the implementation block
@property (assign) BOOL inProgress;                                  //@synthesize inProgress=_inProgress - In the implementation block
@property (assign) unsigned long long operation;                     //@synthesize operation=_operation - In the implementation block
@property (copy) id _callback;                                       //@synthesize callback=_callback - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> _queue;              //@synthesize queue=_queue - In the implementation block
@property (assign) id<IMFileCopierDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (retain,readonly) NSURL * inputURL;                        //@synthesize inputURL=_inputURL - In the implementation block
@property (retain,readonly) NSURL * outputURL;                       //@synthesize outputURL=_outputURL - In the implementation block
@property (retain,readonly) id identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL wasCancelled;                    //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (nonatomic,readonly) BOOL didErrorOccur;                   //@synthesize didErrorOccur=_didErrorOccur - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)_queue;
-(id<IMFileCopierDelegate>)delegate;
-(void)setDelegate:(id<IMFileCopierDelegate>)arg1 ;
-(id)identifier;
-(void)cancel;
-(unsigned long long)operation;
-(void)setOperation:(unsigned long long)arg1 ;
-(void)start;
-(id)_callback;
-(void)cleanup;
-(void)_fillOutputURLFromInputURL;
-(NSURL *)inputURL;
-(id)_temporaryCopierPath;
-(void)_worker_doCopy;
-(NSURL *)outputURL;
-(void)_main_copierFinishedWithResult:(id)arg1 ;
-(id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 delegate:(id)arg5 ;
-(BOOL)wasCancelled;
-(BOOL)didErrorOccur;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
-(void*)_BOMCopier;
-(void)set_BOMCopier:(void*)arg1 ;
-(id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 queue:(id)arg6 ;
-(void)set_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)set_callback:(id)arg1 ;
@end
