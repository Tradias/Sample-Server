#pragma once
#include "../TypeDefiniton.hpp"
#include "Constants.hpp"
#include "../ns0/AnalogUnitRange.hpp"
#include "../../src_generated/types_machinetool_generated.h"
#include "ElementMonitoring.hpp"

namespace machineTool
{

struct MachineOperationMonitoring_t
{
  BindableMemberValue<bool> IsWarmUp;
  BindableMemberValue<UA_MachineOperationMode> OperationMode;
  BindableMember<ns0::AnalogUnitRange_t<double>> FeedOverride;
  BindableMemberValue<std::uint32_t> PowerOnDuration;
};

} // namespace machineTool

REFL_TYPE(machineTool::MachineOperationMonitoring_t,
          UmatiServerLib::attribute::UaObjectType{
              .NodeId = UmatiServerLib::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_MACHINEOPERATIONMONITORINGTYPE)})
REFL_FIELD(OperationMode)
REFL_FIELD(FeedOverride, UmatiServerLib::attribute::MemberInTypeNodeId{
               .NodeId = UmatiServerLib::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_MACHINEOPERATIONMONITORINGTYPE)},
           UmatiServerLib::attribute::PlaceholderOptional())
REFL_FIELD(PowerOnDuration, UmatiServerLib::attribute::MemberInTypeNodeId{
               .NodeId = UmatiServerLib::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_MACHINEOPERATIONMONITORINGTYPE_POWERONDURATION)},
           UmatiServerLib::attribute::PlaceholderOptional())
REFL_FIELD(IsWarmUp, UmatiServerLib::attribute::MemberInTypeNodeId{
               .NodeId = UmatiServerLib::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_MACHINEOPERATIONMONITORINGTYPE_ISWARMUP)},
           UmatiServerLib::attribute::PlaceholderOptional())
REFL_END