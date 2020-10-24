
"use strict";

let TrayContents = require('./TrayContents.js');
let KitTray = require('./KitTray.js');
let LogicalCameraImage = require('./LogicalCameraImage.js');
let StorageUnit = require('./StorageUnit.js');
let ConveyorBeltState = require('./ConveyorBeltState.js');
let PopulationState = require('./PopulationState.js');
let KitObject = require('./KitObject.js');
let Order = require('./Order.js');
let Model = require('./Model.js');
let Proximity = require('./Proximity.js');
let DetectedObject = require('./DetectedObject.js');
let Kit = require('./Kit.js');
let VacuumGripperState = require('./VacuumGripperState.js');

module.exports = {
  TrayContents: TrayContents,
  KitTray: KitTray,
  LogicalCameraImage: LogicalCameraImage,
  StorageUnit: StorageUnit,
  ConveyorBeltState: ConveyorBeltState,
  PopulationState: PopulationState,
  KitObject: KitObject,
  Order: Order,
  Model: Model,
  Proximity: Proximity,
  DetectedObject: DetectedObject,
  Kit: Kit,
  VacuumGripperState: VacuumGripperState,
};
