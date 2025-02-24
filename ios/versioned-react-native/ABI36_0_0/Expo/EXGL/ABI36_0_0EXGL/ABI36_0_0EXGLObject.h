// Copyright 2016-present 650 Industries. All rights reserved.

#import <EXGL-CPP/UEXGL.h>

@interface ABI36_0_0EXGLObject : NSObject

@property (nonatomic, assign) UEXGLContextId exglCtxId;
@property (nonatomic, assign) UEXGLObjectId exglObjId;

// For internal use by children -- use `[ABI36_0_0EXGLObject createWithConfig:...]` above to
// create the `ABI36_0_0EXGLObject` of the right type
- (instancetype)initWithConfig:(NSDictionary *)config;

@end
