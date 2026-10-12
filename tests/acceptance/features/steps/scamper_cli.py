from behave import *
import subprocess


@given('I am running scamper from the command line')
def step_impl(context):
    context.scamper_path = '../../scamper/scamper'
    context.traceb_cmd_name = 'traceb'
    context.probe_count_flag = 'c'

@when('I run the "traceb" command with -c 5 and destination 8.8.8.8')
def step_impl(context):
    full_traceb_cmd = f'{context.traceb_cmd_name} -c 5 8.8.8.8'
    result = subprocess.run([context.scamper_path, '-c', full_traceb_cmd], check=True)
    print(result)
    assert True is False

@then('I should see 5 ICMP probe packets sent')
def step_impl(context):
    # TODO Implement
    assert context.failed is False
